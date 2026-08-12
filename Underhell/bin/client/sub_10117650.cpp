int __userpurge sub_10117650@<eax>(_DWORD *a1@<ecx>, int a2@<esi>, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // edx
  double v7; // st6
  double v8; // st3
  unsigned int v9; // edi
  float *v10; // ecx
  double v11; // rt0
  double v12; // rt1
  double v13; // st3
  double v14; // st6
  double v15; // rt2
  float v16; // [esp+0h] [ebp-4h]

  v16 = *(float *)(a1[7] + 1320);
  result = (*(int (__thiscall **)(_DWORD *, int, int, int, int))(*a1 + 68))(a1, a3, a4, a5, a2);
  v6 = result - 1;
  if ( result - 1 >= 0 )
  {
    v7 = 0.0;
    v8 = v16;
    if ( result < 4 )
    {
      v13 = 0.0;
      v14 = v16;
    }
    else
    {
      v9 = (unsigned int)result >> 2;
      v10 = (float *)(a3 + 4 * v6 - 8);
      v6 -= 4 * ((unsigned int)result >> 2);
      while ( 1 )
      {
        if ( -1.701411733192644e38 == v10[2] )
        {
          v12 = v8;
          v13 = v7;
          v14 = v12;
          v10[2] = v13;
        }
        else
        {
          if ( -3.402823466385289e38 != v10[2] && 3.4028235e38 != v10[2] )
            v10[2] = v10[2] + v8;
          v15 = v8;
          v13 = v7;
          v14 = v15;
        }
        if ( -1.701411733192644e38 == v10[1] )
        {
          v10[1] = v13;
        }
        else if ( -3.402823466385289e38 != v10[1] && 3.4028235e38 != v10[1] )
        {
          v10[1] = v10[1] + v14;
        }
        if ( -1.701411733192644e38 == *v10 )
        {
          *v10 = v13;
        }
        else if ( -3.402823466385289e38 != *v10 && 3.4028235e38 != *v10 )
        {
          *v10 = *v10 + v14;
        }
        if ( -1.701411733192644e38 == *(v10 - 1) )
        {
          *(v10 - 1) = v13;
        }
        else if ( -3.402823466385289e38 != *(v10 - 1) && 3.4028235e38 != *(v10 - 1) )
        {
          *(v10 - 1) = *(v10 - 1) + v14;
        }
        v10 -= 4;
        if ( !--v9 )
          break;
        v11 = v13;
        v8 = v14;
        v7 = v11;
      }
    }
    for ( ; v6 >= 0; --v6 )
    {
      if ( -1.701411733192644e38 == *(float *)(a3 + 4 * v6) )
      {
        *(float *)(a3 + 4 * v6) = v13;
      }
      else if ( -3.402823466385289e38 != *(float *)(a3 + 4 * v6) && 3.4028235e38 != *(float *)(a3 + 4 * v6) )
      {
        *(float *)(a3 + 4 * v6) = v14 + *(float *)(a3 + 4 * v6);
      }
    }
  }
  return result;
}
