void __thiscall sub_10186610(float *this)
{
  int v1; // ebx
  bool v2; // c0
  unsigned __int8 *v3; // esi
  float *v4; // eax
  float *v5; // edi
  _BYTE v6[8]; // [esp+4h] [ebp-24h] BYREF
  float v7; // [esp+Ch] [ebp-1Ch] BYREF
  float v8; // [esp+10h] [ebp-18h]
  float v9; // [esp+14h] [ebp-14h] BYREF
  float v10; // [esp+18h] [ebp-10h]
  float *v11; // [esp+1Ch] [ebp-Ch]
  int v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+24h] [ebp-4h]

  v1 = (int)this;
  v2 = this[1596] > 0.0;
  v11 = this;
  if ( v2 )
  {
    v3 = (unsigned __int8 *)this + 302;
    v12 = 17;
    do
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, unsigned __int8 *))(*(_DWORD *)v1 + 156))(v1, v3 - 14) )
      {
        v4 = (float *)(*(int (__thiscall **)(int, _BYTE *, unsigned __int8 *))(*(_DWORD *)v1 + 116))(v1, v6, v3 + 42);
        *(float *)(v3 + 66) = *v4;
        v13 = 0;
        v5 = (float *)(v3 + 74);
        *(float *)(v3 + 70) = v4[1];
        do
        {
          if ( 0.0 == *v5 && v5[1] == 0.0 )
            break;
          sub_101859B0(v1, &v7, v5 - 2);
          sub_101859B0(v1, &v9, v5);
          if ( (v7 - v9) * (v7 - v9) + (v8 - v10) * (v8 - v10) < 16384.0 )
          {
            (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 44))(
              dword_1047CA6C,
              *(v3 - 2),
              *(v3 - 1),
              *v3,
              (int)(255.0 - (double)v13 * 255.0 * 0.033333335));
            (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 60))(
              dword_1047CA6C,
              (int)v7,
              (int)v8,
              (int)v9,
              (int)v10);
            v1 = (int)v11;
          }
          v5 += 2;
          ++v13;
        }
        while ( v13 < 29 );
      }
      v3 += 320;
      --v12;
    }
    while ( v12 );
  }
}
