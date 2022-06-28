vector<vector<string>> ans;

bool issafe(int row, int col, int n, vector<string> board)
{
  int dubrow = row;
  int dubcol = col;
  //         check for upper left
  while (row >= 0 && col >= 0)
  {
    if (board[row][col] == 'Q')
      return false;
    row--;
    col--;
  }

  //         check for left column
  row = dubrow;
  col = dubcol;
  while (col >= 0)
  {
    if (board[row][col] == 'Q')
      return false;
    col--;
  }
  //         checking for lower left diagonal
  row = dubrow;
  col = dubcol;
  while (row < n && col >= 0)
  {
    if (board[row][col] == 'Q')
      return false;
    row++;
    col--;
  }
  return true;
}

void solve(int col, int n, vector<string> board)
{
  if (col == n)
  {
    ans.push_back(board);
    return;
  }
  for (int row = 0; row < n; row++)
  {
    if (issafe(row, col, n, board))
    {
      board[row][col] = 'Q';
      solve(col + 1, n, board);
      board[row][col] = '.';
    }
  }
}

public:
vector<vector<string>> solveNQueens(int n)
{
  vector<string> board(n); // mistake here did not gave size of vector-n
                           //         creating a blank nXn matrix filled with '.';
  string s(n, '.');
  for (int i = 0; i < n; i++)
    board[i] = s;
  solve(0, n, board);
  return ans;
}
}
;
