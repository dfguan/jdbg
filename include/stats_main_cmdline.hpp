/***** This code was generated by Yaggo. Do not edit ******/

#ifndef __STATS_ARGS_HPP__
#define __STATS_ARGS_HPP__

#include <include/yaggo.hpp>

class stats_args {
public:
  bool                           recompute_flag;
  uint64_t                       lower_count_arg;
  bool                           lower_count_given;
  uint64_t                       upper_count_arg;
  bool                           upper_count_given;
  bool                           verbose_flag;
  const char *                   output_arg;
  bool                           output_given;
  const char *                   db_arg;

  enum {
    USAGE_OPT = 1000,
    FULL_HELP_OPT
  };

  stats_args() : 
    recompute_flag(false),
    lower_count_arg(), lower_count_given(false),
    upper_count_arg(), upper_count_given(false),
    verbose_flag(false),
    output_arg(""), output_given(false)
  { }

  stats_args(int argc, char* argv[]) :
    recompute_flag(false),
    lower_count_arg(), lower_count_given(false),
    upper_count_arg(), upper_count_given(false),
    verbose_flag(false),
    output_arg(""), output_given(false)
  { parse(argc, argv); }

  void parse(int argc, char* argv[]) {
    static struct option long_options[] = {
      {"recompute", 0, 0, 'r'},
      {"lower-count", 1, 0, 'L'},
      {"upper-count", 1, 0, 'U'},
      {"verbose", 0, 0, 'v'},
      {"output", 1, 0, 'o'},
      {"help", 0, 0, 'h'},
      {"full-help", 0, 0, FULL_HELP_OPT},
      {"usage", 0, 0, USAGE_OPT},
      {"version", 0, 0, 'V'},
      {0, 0, 0, 0}
    };
    static const char *short_options = "hVrL:U:vo:";

    std::string err;
#define CHECK_ERR(type,val,which) if(!err.empty()) { std::cerr << "Invalid " #type " '" << val << "' for [" which "]: " << err << "\n"; exit(1); }
    while(true) { 
      int index = -1;
      int c = getopt_long(argc, argv, short_options, long_options, &index);
      if(c == -1) break;
      switch(c) {
      case ':': 
        std::cerr << "Missing required argument for "
                  << (index == -1 ? std::string(1, (char)optopt) : std::string(long_options[index].name))
                  << std::endl;
        exit(1);
      case 'h':
        std::cout << usage() << "\n\n" << help() << std::endl;
        exit(0);
      case USAGE_OPT:
        std::cout << usage() << "\nUse --help for more information." << std::endl;
        exit(0);
      case 'V':
        print_version();
        exit(0);
      case '?':
        std::cerr << "Use --usage or --help for some help\n";
        exit(1);
      case FULL_HELP_OPT:
        std::cout << usage() << "\n\n" << help() << "\n\n" << hidden() << std::endl;
        exit(0);
      case 'r':
        recompute_flag = true;
        break;
      case 'L':
        lower_count_given = true;
        lower_count_arg = yaggo::conv_uint<uint64_t>((const char *)optarg, err, false);
        CHECK_ERR(uint64_t, optarg, "-L, --lower-count=uint64")
        break;
      case 'U':
        upper_count_given = true;
        upper_count_arg = yaggo::conv_uint<uint64_t>((const char *)optarg, err, false);
        CHECK_ERR(uint64_t, optarg, "-U, --upper-count=uint64")
        break;
      case 'v':
        verbose_flag = true;
        break;
      case 'o':
        output_given = true;
        output_arg = optarg;
        break;
      }
    }

    // Parse arguments
    if(argc - optind != 1)
      error("Requires exactly 1 argument.");
    db_arg = argv[optind];
    ++optind;
  }

#define stats_args_USAGE "Usage: jellyfish stats [options] db:path"
  const char * usage() const { return stats_args_USAGE; }
  void error(const char *msg) { 
    std::cerr << "Error: " << msg << "\n" << usage()
              << "\nUse --help for more information"
              << std::endl;
    exit(1);
  }

#define stats_args_HELP "Statistics\n\nDisplay some statistics about the k-mers in the hash:\n" \
  "\n" \
  "Unique:    Number of k-mers which occur only once.\n" \
  "Distinct:  Number of k-mers, not counting multiplicity.\n" \
  "Total:     Number of k-mers, including multiplicity.\n" \
  "Max_count: Maximum number of occurrence of a k-mer.\n\n" \
  "Options (default value in (), *required):\n" \
  " -L, --lower-count=uint64                 Don't consider k-mer with count < lower-count\n" \
  " -U, --upper-count=uint64                 Don't consider k-mer with count > upper-count\n" \
  " -v, --verbose                            Verbose (false)\n" \
  " -o, --output=string                      Output file\n" \
  "     --usage                              Usage\n" \
  " -h, --help                               This message\n" \
  "     --full-help                          Detailed help\n" \
  " -V, --version                            Version"

  const char * help() const { return stats_args_HELP; }
#define stats_args_HIDDEN "Hidden options:\n" \
  " -r, --recompute                          Recompute (false)"

  const char * hidden() const { return stats_args_HIDDEN; }
  void print_version(std::ostream &os = std::cout) const {
#ifndef PACKAGE_VERSION
#define PACKAGE_VERSION "0.0.0"
#endif
    os << PACKAGE_VERSION << "\n";
  }
  void dump(std::ostream &os = std::cout) {
    os << "recompute_flag:" << recompute_flag << "\n";
    os << "lower_count_given:" << lower_count_given << " lower_count_arg:" << lower_count_arg << "\n";
    os << "upper_count_given:" << upper_count_given << " upper_count_arg:" << upper_count_arg << "\n";
    os << "verbose_flag:" << verbose_flag << "\n";
    os << "output_given:" << output_given << " output_arg:" << output_arg << "\n";
    os << "db_arg:" << db_arg << "\n";
  }
private:
};

#endif // __STATS_ARGS_HPP__"
