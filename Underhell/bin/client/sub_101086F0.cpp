int __thiscall sub_101086F0(int *this, float a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  int *v11; // eax
  int v12; // eax
  float v13; // [esp+14h] [ebp+8h]

  v4 = 0;
  v5 = 0;
  if ( !LOBYTE(a2) || (v7 = this[5]) == 0 )
  {
    LOBYTE(v4) = a4 - (a3 + 1) < 0;
    v4 = (a4 - (a3 + 1)) & (v4 - 1);
    if ( v4 >= this[4] )
      v4 = this[4];
    sub_10107D70(v4 - 1);
    goto LABEL_17;
  }
  if ( *(int *)(dword_10436C0C + 48) < 2 )
  {
LABEL_8:
    if ( this[6] )
      goto LABEL_9;
LABEL_17:
    this[4] = 0;
    this[6] = 0;
    this[5] = 0;
    return v4 + 1;
  }
  if ( !this[6] )
  {
    v8 = this[4];
    if ( v8 > 0 && v7 <= v8 )
    {
      sub_10107D70(v8 - 1);
      sub_10107D00(this[5], this[4]);
      v9 = this[4] - this[5];
      this[4] = 0;
      this[6] = 0;
      this[5] = 0;
      return v9 + 1;
    }
    goto LABEL_8;
  }
LABEL_9:
  v11 = (int *)sub_100422D0();
  v13 = *((float *)off_103DC81C + 3);
  *((float *)off_103DC81C + 3) = sub_10011E10(v11) - *((float *)off_103DC81C + 7);
  if ( ((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC) > 0 )
  {
    do
    {
      v12 = ((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, v5);
      if ( v12 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 376))(v12);
      ++v5;
    }
    while ( v5 < ((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC) );
  }
  *((float *)off_103DC81C + 3) = v13;
  this[4] = 0;
  this[6] = 0;
  this[5] = 0;
  return 1;
}
