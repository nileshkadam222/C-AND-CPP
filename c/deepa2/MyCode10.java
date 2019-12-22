import java.util.Arrays;
class MyCode10{

  // Returns true if the given board contains the given string.
  // Tests every possible starting location.
  public static boolean contains(char[][] board, String s) {
    int rows = board.length;
    int cols = board[0].length;
    for (int row=0; row<rows; row++)
      for (int col=0; col<cols; col++)
        if (contains(board,s,row,col))
          return true;
    return false;
  }

  // Returns true if the given board contains the given string,
  // starting from the given startRow and startCol location.
  // Tests every possible direction from there, where a direction
  // is determined by drow,dcol (the change in rows and cols).
  public static boolean contains(char[][] board, String s,
                                 int startRow, int startCol) {
    int rows = board.length;
    int cols = board[0].length;
    for (int dRow=-1; dRow<=1; dRow++)
      for (int dCol=-1; dCol<=1; dCol++)
        if (((dRow != 0) || (dCol != 0)) &&
            (contains(board,s,startRow,startCol,dRow,dCol)))
          return true;
    return false;
  }

  // Returns true if the given board contains the given string,
  // starting from the given startRow and startCol location,
  // heading in the given drow,dcol direction.
  public static boolean contains(char[][] board, String s,
                                 int startRow, int startCol,
                                 int dRow, int dCol) {
    int rows = board.length;
    int cols = board[0].length;
    for (int i=0; i<s.length(); i++) {
      int row = startRow + i*dRow;
      int col = startCol + i*dCol;
      if ((row < 0) || (row >= rows) || (col < 0) || (col >= cols))
        // we're off the board, so we did not match
        return false;
      if (board[row][col] != s.charAt(i))
        // we're on the board, but we don't match
        return false;
    }
    return true;
  }

  public static void main(String[] args) {
    char[][] board = { { 't', 'a', 'c', 'w' },
                       { 'n', 'o', 'o', 'c' },
                       { 'd', 'o', 'g', 'x' }
                     };

    String[] terms = { "cat", "cod", "coon", "dog", "ox",
                       "caw", "cow", "con", "dogs", "ax" };

    // The first 5 terms are on the board, the last 5 are not
    for (int i=0; i<terms.length; i++)
      System.out.println(terms[i] + ": " + contains(board, terms[i]));
  }
}