int __thiscall sub_1007E060(int *this, _WORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int result; // eax
  int *v6; // eax
  float v7[3]; // [esp+4h] [ebp-20h] BYREF
  float v8[3]; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+1Ch] [ebp-8h] BYREF
  int v10; // [esp+20h] [ebp-4h]

  if ( (unsigned __int8)ThreadInMainThread() )
    ++this[97];
  v3 = this[8];
  LOWORD(v10) = *a2;
  v9 = 0;
  sub_1007D610(*(_DWORD *)(v3 + 36 * (unsigned __int16)v10), v7, v8);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 168))(dword_1041315C);
  result = (*(int (__thiscall **)(int, float *, float *, int *, int *))(*(_DWORD *)v4 + 8))(v4, v7, v8, this + 2, &v9);
  if ( v9 )
  {
    v6 = (int *)sub_100DDA40(16);
    if ( v6 )
    {
      v6[1] = v9;
      v6[2] = v10;
      return sub_1001AC40(this + 98, v6);
    }
    else
    {
      return sub_1001AC40(this + 98, 0);
    }
  }
  return result;
}
