template <class T> void BubbleSortFront(T & t)
{
    bool swapped = true;
    auto wall = t.rbegin();
    while(wall < t.rend() && swapped)
    {
        auto new_wall = wall;
        swapped = false;
        for(auto iter = t.rend() - 1; iter != wall; --iter)
        {
            if(*iter > *(iter - 1))
            {
                new_wall = iter - 1;
                std::swap(*iter, *(iter - 1));
                swapped = true;
            }
        }
        
        wall = new_wall;
    }
}


template <class T> void BubbleSortBack(T & t)
{
    bool swapped = true;
    auto wall = t.begin();
    while(wall < t.end() && swapped)
    {
        auto new_wall = wall;
        swapped = false;
        for(auto iter = t.end() - 1; iter != wall; --iter)
        {
            if(*iter < *(iter - 1))
            {
                new_wall = iter - 1;
                std::swap(*iter, *(iter - 1));
                swapped = true;
            }
        }
        
        wall = new_wall;
    }
}
