int __thiscall sub_10321050(_DWORD *this)
{
  _DWORD *v1; // esi
  int result; // eax
  int v3; // ebx
  _DWORD *v4; // edi
  int v5; // esi
  _DWORD *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  float *v11; // ecx
  int *v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  float v17; // [esp+8h] [ebp-38h]
  char Buffer[32]; // [esp+1Ch] [ebp-24h] BYREF
  _DWORD *v19; // [esp+3Ch] [ebp-4h]

  v1 = this;
  v19 = this;
  sub_102B4560((int)this);
  result = v1[62] >> 18;
  if ( (v1[62] & 0x40000) != 0 )
  {
    v3 = 0;
    v4 = v1 + 1062;
    while ( 1 )
    {
      sub_10429A00(Buffer, 0x20u, "Light_Red%d", v3);
      v5 = sub_100BEF30((int)v1, Buffer);
      if ( v5 )
      {
        v6 = sub_10243040("sprites/redglow1.vmt", &flt_106F1CA8, 0);
        if ( v6 )
          *v4 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
        else
          *v4 = -1;
        if ( *v4 != -1 )
        {
          v7 = &off_1061BE18[4 * (*v4 & 0xFFF) + 1];
          v8 = *v4 >> 12;
          if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v8 )
          {
            if ( *v7 )
            {
              if ( off_1061BE18[4 * (*v4 & 0xFFF) + 2] == v8 )
                v9 = *v7;
              else
                v9 = 0;
              (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v9 + 140))(v9, v19, v5);
              if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
                v10 = 0;
              else
                v10 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
              sub_100E10C0(v10, &flt_106F1CA8);
              if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
                v11 = 0;
              else
                v11 = (float *)off_1061BE18[4 * (*v4 & 0xFFF) + 1];
              sub_100DD790(v11, &flt_106F1CA8);
              if ( *v4 == -1 || (v12 = off_1061BE18, off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12) )
                v13 = 0;
              else
                v13 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
              sub_100E0970(v13, (int)v12, 0, 0);
              if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
                v14 = 0;
              else
                v14 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
              sub_10128950(v14, 5, 255, 255, 255, 200, 0);
              if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
                v15 = 0;
              else
                v15 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
              sub_102428B0(v15, 1.0, 0.0);
              if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
                v16 = 0;
              else
                v16 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
              sub_10242BA0(v16);
            }
          }
        }
      }
      else
      {
        *v4 = -1;
      }
      ++v3;
      ++v4;
      if ( v3 >= 3 )
        break;
      v1 = v19;
    }
    v17 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC3F0(v19, (int)sub_10316910, v17, off_1066C8D0);
  }
  return result;
}
