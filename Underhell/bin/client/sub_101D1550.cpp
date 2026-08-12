char __stdcall sub_101D1550(unsigned __int8 *a1, int a2, int a3)
{
  unsigned __int8 *v3; // esi
  int v4; // ebp
  char result; // al

  v3 = a1;
  v4 = 16;
  do
  {
    result = sub_101C6780(*v3, v3[a2 - (_DWORD)a1]);
    (v3++)[a3 - (_DWORD)a1] = result;
    --v4;
  }
  while ( v4 );
  return result;
}
