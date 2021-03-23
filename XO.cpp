bool XO(const std::string& str)
{
    int countX=0;
    int countO=0;
    for (auto c: str){
        if (tolower(c) == 'x'){
            countX++;
        } else if (tolower(c) == 'o'){
            countO++;
        }
    }
    if (countO == countX) return true;
    else return false;
}


//  int xCount = std::count(str.begin(), str.end(), 'x') + std::count(str.begin(), str.end(), 'X');
//  int oCount = std::count(str.begin(), str.end(), 'o') + std::count(str.begin(), str.end(), 'O');
// return xCount ==  oCount;