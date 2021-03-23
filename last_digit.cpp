int Modul(int a, std::string b)
{
    int mod = 0;
    for (int i = 0; i < b.size() ; i++)
        mod = (mod * 10 + b[i] - '0') % a;
    return mod;
}


int last_digit(const std::string &str1, const std::string &str2) {

    int len_a = str1.size();
    int len_b = str2.size();

    if (len_a == 1 && len_b == 1 && str1[0] == '0' && str2[0] == '0'){
        return 1;
    }
    if (len_b == 1 && str2[0] == '0'){
        return 1;
    }
    if (len_a == 1 && str1[0] == '0'){
        return 0;
    }
    int exp = (Modul(4, str2) == 0) ? 4 : Modul(4, str2);
    int res = pow(str1.back() - '0', exp);
    return res % 10;
}
