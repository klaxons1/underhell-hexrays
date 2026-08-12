int __stdcall sub_10083C90(int a1, int a2, int a3, int a4, int a5)
{
  float v6; // [esp+0h] [ebp-10h]
  float v7; // [esp+4h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+Ch] [ebp-4h]

  v9 = ((double)a5 - 1.0) * 0.0009765625;
  v8 = ((double)a4 - 1.0) * 0.0009765625;
  v7 = ((double)a3 + 0.5) * 0.0009765625;
  v6 = 0.0009765625 * ((double)a2 + 0.5);
  return (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 36))(
           dword_1041318C,
           a1,
           LODWORD(v6),
           LODWORD(v7),
           LODWORD(v8),
           LODWORD(v9));
}
