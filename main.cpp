#include "editor.h"

using namespace std;

int main() {
  std::vector<std::string> mails = read_file_mails("input.txt");
  hide_mails_part(mails);
  save_hidden_mails(mails, "output.txt");
}
