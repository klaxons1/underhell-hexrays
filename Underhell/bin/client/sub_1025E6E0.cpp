int __thiscall sub_1025E6E0(int this, int *a2, int *a3, int *a4, int *a5)
{
  int result; // eax
  int v7; // esi
  int v8; // ebx
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st4
  int v13; // [esp+8h] [ebp-10h] BYREF
  int v14; // [esp+Ch] [ebp-Ch] BYREF
  int v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 212) )
  {
    if ( *(_BYTE *)(this + 208) )
    {
      sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v14, (int)&v16);
      (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 212) + 12))(
        *(_DWORD *)(this + 212),
        &v13,
        &v15);
      v7 = v14;
      v8 = v16;
      if ( v14 <= 0 || v16 <= 0 || v13 <= 0 || v15 <= 0 )
      {
        *a3 = 0;
        result = (int)a5;
        *a2 = 0;
        *a4 = v7;
        *a5 = v8;
      }
      else
      {
        v9 = (double)v13;
        v10 = (double)v14 / v9;
        v11 = (double)v15;
        v12 = (double)v16 / v11;
        if ( v12 <= v10 )
          v10 = v12;
        *a4 = (int)(v9 * v10);
        result = (int)(v11 * v10);
        *a5 = result;
        switch ( *(_DWORD *)(this + 204) )
        {
          case 0:
            result = (int)a3;
            *a3 = 0;
            *a2 = 0;
            break;
          case 1:
            *a2 = (v7 - *a4) / 2;
            result = (int)a3;
            *a3 = 0;
            break;
          case 2:
            *a2 = v7 - *a4;
            *a3 = 0;
            break;
          case 3:
            *a2 = 0;
            result = (v8 - *a5) / 2;
            *a3 = result;
            break;
          case 4:
            *a2 = (v7 - *a4) / 2;
            result = (v8 - *a5) / 2;
            *a3 = result;
            break;
          case 5:
          case 7:
            *a2 = v7 - *a4;
            result = (v8 - *a5) / 2;
            *a3 = result;
            break;
          case 6:
            result = (int)a3;
            *a2 = v7 - *a4;
            *a3 = 0;
            break;
          case 8:
            result = (int)a3;
            *a2 = v7 - *a4;
            *a3 = v8 - *a5;
            break;
          default:
            *a3 = 0;
            *a2 = 0;
            break;
        }
      }
    }
    else
    {
      *a3 = 0;
      *a2 = 0;
      return sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)a4, (int)a5);
    }
  }
  else
  {
    *a5 = 0;
    result = (int)a2;
    *a4 = 0;
    *a3 = 0;
    *a2 = 0;
  }
  return result;
}
