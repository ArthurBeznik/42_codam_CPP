
#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>

class PmergeMe {

    private:
        
        
    public:
        PmergeMe(void);
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator = (const PmergeMe &op);
        ~PmergeMe(void);


};


#endif
