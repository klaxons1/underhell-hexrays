int __thiscall sub_100C5BE0(int this, int a2)
{
  int v2; // edi
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // cx
  int v8; // edi
  _WORD *v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // edi
  _DWORD *v15; // [esp+8h] [ebp-10h]
  unsigned __int16 i; // [esp+Ch] [ebp-Ch]
  unsigned __int16 v17[3]; // [esp+10h] [ebp-8h] BYREF
  char v18; // [esp+17h] [ebp-1h] BYREF

  v2 = a2;
  if ( this != a2 )
  {
    sub_100C4E70((int *)(this + 28), (int *)(a2 + 28));
    *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
    *(_BYTE *)(this + 52) = *(_BYTE *)(a2 + 52);
    *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
    *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
    *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
    *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
    *(_WORD *)(this + 80) = *(_WORD *)(a2 + 80);
    v4 = sub_100C1AE0(a2);
    for ( i = v4; v4 != 0xFFFF; i = v4 )
    {
      v15 = (_DWORD *)(*(_DWORD *)(v2 + 4) + 20 * v4 + 8);
      sub_100C0CD0((_WORD *)this, (int)v15, v17, &v18);
      v5 = sub_100C0EB0(this);
      v6 = v17[0];
      v7 = v5;
      v8 = 20 * v5;
      v9 = (_WORD *)(v8 + *(_DWORD *)(this + 4));
      v9[1] = -1;
      *v9 = -1;
      v9[2] = v6;
      v9[3] = 0;
      if ( v6 == 0xFFFF )
      {
        *(_WORD *)(this + 16) = v7;
      }
      else
      {
        v10 = 5 * v6;
        v11 = *(_DWORD *)(this + 4);
        if ( v18 )
          *(_WORD *)(v11 + 4 * v10) = v7;
        else
          *(_WORD *)(v11 + 4 * v10 + 2) = v7;
      }
      sub_100C2080(this, v7);
      v12 = *(_DWORD *)(this + 4);
      ++*(_WORD *)(this + 18);
      v13 = (_DWORD *)(v12 + v8 + 8);
      if ( v13 )
      {
        *v13 = *v15;
        v13[1] = v15[1];
        v13[2] = v15[2];
      }
      v2 = a2;
      v4 = sub_100C1BB0((_DWORD *)a2, i);
    }
  }
  return this;
}
