unsigned int __thiscall sub_10427A40(_DWORD *this)
{
  unsigned int result; // eax
  int v3; // ebp
  int *v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  bool v9; // zf
  _DWORD *v10; // edi
  int v11; // eax
  unsigned int v12; // [esp+10h] [ebp-3Ch]
  _DWORD *v13; // [esp+14h] [ebp-38h]
  int v14; // [esp+18h] [ebp-34h]
  _DWORD v15[6]; // [esp+1Ch] [ebp-30h]
  _DWORD v16[6]; // [esp+34h] [ebp-18h]

  v15[0] = this + 142;
  v15[1] = this + 147;
  v15[2] = this + 152;
  v15[3] = this + 157;
  v15[4] = this + 162;
  v15[5] = this + 167;
  v16[0] = this + 177;
  v16[1] = this + 182;
  v16[2] = this + 187;
  v16[3] = this + 192;
  result = 0;
  v16[4] = this + 197;
  v16[5] = this + 202;
  this[129] = 0;
  v12 = 0;
  do
  {
    v13 = *(_DWORD **)((char *)v15 + result);
    v3 = 0;
    v14 = v13[3];
    if ( v14 > 0 )
    {
      v4 = *(int **)((char *)v16 + result);
      do
      {
        v5 = v4[3];
        v6 = v4[1];
        if ( v5 + 1 > v6 )
          sub_102ABFC0(v4, v5 - v6 + 1);
        ++v4[3];
        v7 = *v4;
        v8 = v4[3] - v5 - 1;
        v9 = v4[3] - v5 == 1;
        v4[4] = *v4;
        if ( v8 >= 0 && !v9 )
          memcpy((void *)(v7 + 4 * v5 + 4), (const void *)(v7 + 4 * v5), 4 * v8);
        v10 = (_DWORD *)(*v4 + 4 * v5);
        if ( v10 )
          *v10 = this[129];
        v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*v13 + 4 * v3) + 4))(*(_DWORD *)(*v13 + 4 * v3));
        ++v3;
        this[129] = (v11 + this[129] + 15) & 0xFFFFFFF0;
      }
      while ( v3 < v14 );
      result = v12;
    }
    result += 4;
    v12 = result;
  }
  while ( result < 0x18 );
  return result;
}
