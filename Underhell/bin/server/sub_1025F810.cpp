_DWORD *__cdecl sub_1025F810(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *result; // eax

  switch ( a1 )
  {
    case 1:
      result = a2;
      *a2 = 255;
      *a3 = 0;
      *a4 = 0;
      break;
    case 2:
      result = a2;
      *a2 = 255;
      *a3 = 255;
      *a4 = 0;
      break;
    case 3:
      result = a2;
      *a2 = 0;
      *a3 = 255;
      *a4 = 0;
      break;
    case 4:
      result = a2;
      *a2 = 0;
      *a3 = 0;
      *a4 = 255;
      break;
    default:
      result = a2;
      *a2 = 255;
      *a3 = 255;
      *a4 = 255;
      break;
  }
  return result;
}
