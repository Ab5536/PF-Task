bool checkRows(char symbol){
 int count = 0;
 for(int row = 0; row < gridSize; row = row + 1)
 {
 count = 0;
 for(int col = 0; col < gridSize; col = col + 1)
 {
 if(board[row][col] == symbol){
 count = count + 1;
 }
 }
 if(count == gridSize)
 {
 return 1;
 }
 }
 return 0;
}
