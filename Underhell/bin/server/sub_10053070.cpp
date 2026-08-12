int __thiscall sub_10053070(_DWORD **this, int a2)
{
  int *v3; // ebx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  const char *v10; // [esp+14h] [ebp+8h]

  if ( a2 != 1 || !sub_10052150(this) )
    return sub_1004B560(this);
  v3 = this[1];
  v4 = v3[722];
  if ( v4 == -1 || off_1061BE18[4 * (v3[722] & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (v3[722] & 0xFFF) + 1];
  if ( !*(_DWORD *)(v5 + 832) )
    return sub_1004B560(this);
  v10 = *(const char **)(sub_100519F0(this) + 832);
  if ( !v10 )
    v10 = String;
  v6 = *(__int16 *)(sub_100519F0(this) + 816);
  v7 = *v3;
  v8 = sub_10008FB0((int)v10);
  return (*(int (__thiscall **)(int *, int, int))(v7 + 2060))(v3, v6, v8);
}
