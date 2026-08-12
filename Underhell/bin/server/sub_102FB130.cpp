bool __thiscall sub_102FB130(int *this, int a2, int a3)
{
  int v4; // ecx
  unsigned int *v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  int v8; // eax
  int v9; // esi
  bool result; // al

  v4 = this[1];
  result = (!v4
         || ((v5 = (unsigned int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4), v6 = *v5, *v5 == -1)
          || (v7 = &dword_1069E3E4[4 * (*v5 & 0xFFF)], v7[1] != v6 >> 12)
          || (v8 = *v7) == 0
           ? (v9 = 0)
           : (v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8)),
             !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 284))(v9) || sub_10020300(v9, a2) != 1))
        && sub_10265590(this, a2, a3);
  return result;
}
