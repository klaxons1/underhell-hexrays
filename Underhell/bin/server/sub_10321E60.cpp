int *__thiscall sub_10321E60(_DWORD *this)
{
  int *result; // eax
  int *v3; // edi
  char v4; // bl
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  _BYTE v10[48]; // [esp+Ch] [ebp-4Ch] BYREF
  float v11; // [esp+3Ch] [ebp-1Ch]
  float v12; // [esp+40h] [ebp-18h]
  float v13; // [esp+44h] [ebp-14h]
  float v14; // [esp+48h] [ebp-10h]
  float v15; // [esp+4Ch] [ebp-Ch]
  char v16; // [esp+50h] [ebp-8h]
  char v17; // [esp+57h] [ebp-1h]

  result = (int *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  v3 = result;
  v4 = (result[64] & 2) == 0;
  v17 = v4;
  if ( v4 != *((_BYTE *)this + 3693) )
  {
    if ( *((_BYTE *)result + 306) == 9 )
      (*(void (__thiscall **)(int *))(*result + 1252))(result);
    result = (int *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, this[2472]);
    this[2472] = 0;
    v5 = this[934];
    if ( v5 != -1 )
    {
      result = &off_1061BE18[4 * (this[934] & 0xFFF) + 1];
      v6 = v5 >> 12;
      if ( off_1061BE18[4 * (this[934] & 0xFFF) + 2] == v6 )
      {
        if ( *result )
        {
          v7 = v3[106];
          if ( off_1061BE18[4 * (this[934] & 0xFFF) + 2] == v6 )
            v8 = *result;
          else
            v8 = 0;
          v9 = *(_DWORD *)(v8 + 424);
          sub_10422700(v10);
          v12 = 0.0;
          v13 = 0.0;
          v11 = 1.0;
          v14 = 1.0;
          v16 = 1;
          v15 = 1.0;
          sub_100CFD60(v10, v9, v7);
          v12 = 0.0;
          v13 = 0.0;
          v11 = 1.0;
          v16 = 1;
          v14 = 1.0;
          v15 = 1.0;
          result = (int *)(*(int (__thiscall **)(int, int, int, _DWORD, _BYTE *))(*(_DWORD *)dword_106BAFF4 + 68))(
                            dword_106BAFF4,
                            v9,
                            v7,
                            0,
                            v10);
          v4 = v17;
          this[2472] = result;
        }
      }
    }
    *((_BYTE *)this + 3693) = v4;
  }
  return result;
}
