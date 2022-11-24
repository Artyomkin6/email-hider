#include <cmath>
#include "editor.h"

std::vector<std::string> read_file_mails(const std::string& path) {
  std::ifstream fin(path);
  std::vector<std::string> result;
  if (fin.is_open()) {
    while (!fin.eof()) {
      std::string current;
      fin >> current;
      result.push_back(current);
    }
  }
  fin.close();
  return result;
}

void hide_mails_part(std::vector<std::string>& mails) {
  for (auto& mail : mails) {
    uint64_t length = mail.length();
    uint64_t remaining = round(length * 0.45);
    for (uint64_t pos = remaining; pos < length; ++pos) {
      mail[pos] = '*';
    }
  }
}

void save_hidden_mails(const std::vector<std::string>& mails, const std::string& path) {
  std::ofstream fout(path);
  if (fout.is_open()) {
    for (const auto& mail : mails) {
      fout << mail << "\n";
    }
    fout.flush();
  }
  fout.close();
}
