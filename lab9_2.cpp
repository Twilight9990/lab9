void printO(int column,int row){
    if(column<=0 || row<=0){
        cout << "Invalid input";
    }else{
        for(int c=0; c<column; c++){
            for(int r=0; r<row; r++){
                cout<<"O";
            }
        cout << "\n";
    }
    }
}
