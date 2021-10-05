class Integer {
    public:
    
        Integer( int n = 0 ) : i (n) {}
        const Integer operator + ( const Integer& n ) const {
            return Integer ( i + n.i ) ;
        }
    
    private:
        int i ;
};


//---------------------------------------------------------------


