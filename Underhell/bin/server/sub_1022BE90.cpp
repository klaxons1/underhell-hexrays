int __thiscall sub_1022BE90(int *this, int a2, char *Source, int a4, float a5)
{
  int v6; // eax
  int v8; // [esp+4h] [ebp-8Ch] BYREF
  char Destination[128]; // [esp+8h] [ebp-88h] BYREF
  int v10; // [esp+88h] [ebp-8h]
  float v11; // [esp+8Ch] [ebp-4h]

  v11 = 0.0;
  v6 = -1;
  v8 = -1;
  Destination[0] = 0;
  v10 = 75;
  if ( a2 )
    v6 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v8 = v6;
  sub_104299C0(Destination, Source, 0x80u);
  v11 = a5;
  v10 = a4;
  return sub_102290C0(this + 205, this[208], &v8);
}
