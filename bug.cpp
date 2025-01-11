std::vector<bool> vec;
vec.push_back(true);
vec.push_back(false);
bool b = vec[0]; // This line may cause a crash or unexpected behavior if the vector is empty.