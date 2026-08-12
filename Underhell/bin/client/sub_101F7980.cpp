void __thiscall sub_101F7980(void *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  int v11; // ebp

  v6 = a4;
  if ( a4 )
  {
    if ( a4 >= 16 )
    {
      v8 = a3;
      v9 = a3 & 3;
      if ( (a3 & 3) != 0 )
      {
        v10 = 4 - v9;
        if ( a4 < 4 - v9 )
          v10 = a4;
        (*(void (__thiscall **)(void *, int, int, int, int, int))(*(_DWORD *)this + 96))(this, a2, a3, v10, a5, a6);
        v6 = a4 - v10;
        v8 = v10 + a3;
      }
      v11 = v6 / 4;
      if ( v6 / 4 )
      {
        (*(void (__thiscall **)(void *, int, int, int, int, int))(*(_DWORD *)this + 100))(
          this,
          a2,
          v8 / 4,
          v6 / 4,
          a5,
          a6);
        v6 %= 4;
        v8 += 4 * v11;
      }
      if ( v6 )
        (*(void (__thiscall **)(void *, int, int, int, int, int))(*(_DWORD *)this + 96))(this, a2, v8, v6, a5, a6);
    }
    else
    {
      (*(void (__thiscall **)(void *, int, int, int, int, int))(*(_DWORD *)this + 96))(this, a2, a3, a4, a5, a6);
    }
  }
}
