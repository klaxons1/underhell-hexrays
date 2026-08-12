void __thiscall sub_10097DA0(int *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int *v9; // eax
  char v10[128]; // [esp+8h] [ebp-84h] BYREF
  int i; // [esp+88h] [ebp-4h]

  v3 = sub_10097990(a2);
  sub_10096290(this + 2, v3);
  for ( i = v3 - 1; i >= 0; --i )
  {
    sub_1022E7D0(v10, 0x80u);
    v4 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 52))(dword_1041315C, v10, 1);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 68))(dword_10413178, v4) )
    {
      Warning("Detail prop model %s is using vertex-lit materials!\nIt must use unlit materials!\n", v10);
      v4 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
             dword_1041315C,
             "models/error.mdl",
             0);
    }
    v5 = this[5];
    v6 = this[3];
    if ( v5 + 1 > v6 )
      sub_1010AFF0(v5 - v6 + 1);
    ++this[5];
    v7 = this[2];
    v8 = this[5] - v5 - 1;
    this[6] = v7;
    if ( v8 > 0 )
      memcpy((void *)(v7 + 4 * v5 + 4), (const void *)(v7 + 4 * v5), 4 * v8);
    v9 = (int *)(this[2] + 4 * v5);
    if ( v9 )
      *v9 = v4;
  }
}
