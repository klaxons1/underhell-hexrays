void __thiscall sub_1035B000(int this, _DWORD *a2)
{
  unsigned int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int *v9; // ecx
  int v10; // eax
  double v11; // st7
  unsigned int v12; // eax
  int v13; // ecx
  double v14; // st7
  __int64 v15; // [esp-8h] [ebp-28h]
  _BYTE v16[12]; // [esp+8h] [ebp-18h] BYREF
  float v17[3]; // [esp+14h] [ebp-Ch] BYREF
  int v18; // [esp+28h] [ebp+8h]

  switch ( *a2 )
  {
    case 0x81:
      v6 = *(_DWORD *)(this + 3756);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1];
      v8 = *(_DWORD *)(v7 + 1716);
      if ( v8 == -1 || (v9 = &off_1061BE18[4 * (*(_DWORD *)(v7 + 1716) & 0xFFF) + 1], v9[1] != v8 >> 12) )
        v10 = 0;
      else
        v10 = *v9;
      (*(void (__thiscall **)(_DWORD, float *, _BYTE *))(**(_DWORD **)(v10 + 424) + 204))(
        *(_DWORD *)(v10 + 424),
        v17,
        v16);
      *(float *)&v18 = 100.0;
      v11 = 90.0;
      if ( *(_BYTE *)(this + 3788) || *(_BYTE *)(this + 3789) )
      {
        *(float *)&v18 = 10.0;
        v11 = 30.0;
      }
      if ( v11 > *(float *)(this + 3764) )
      {
        v12 = *(_DWORD *)(this + 3756);
        if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] != v12 >> 12 )
          v13 = 0;
        else
          v13 = off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1];
        v14 = *(float *)(v13 + 1652);
        if ( v14 < 0.1 )
        {
          sub_100D7A40(v17);
          if ( v14 < *(float *)&v18 )
            sub_10027CD0((_DWORD *)this, 0);
        }
      }
      break;
    case 0x9A:
      if ( *(float *)(this + 3800) < (double)*(float *)(dword_106B31C8 + 12) )
      {
        if ( *(_BYTE *)(this + 3789) )
        {
          HIDWORD(v15) = this;
          LODWORD(v15) = this;
          sub_1010DD80((_DWORD *)(this + 3828), v15, 0.0);
        }
        v5 = *(_DWORD *)(this + 3756);
        if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] != v5 >> 12 )
        {
          sub_103E6680(0);
          sub_10027CD0((_DWORD *)this, 0);
        }
        else
        {
          sub_103E6680(off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1]);
          sub_10027CD0((_DWORD *)this, 0);
        }
      }
      break;
    case 0x9C:
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3792) )
      {
        v3 = *(_DWORD *)(this + 3756);
        if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 2] != v3 >> 12 )
          v4 = 0;
        else
          v4 = off_1061BE18[4 * (*(_DWORD *)(this + 3756) & 0xFFF) + 1];
        if ( !*(_BYTE *)(v4 + 1668) )
          sub_10027CD0((_DWORD *)this, 0);
      }
      break;
    default:
      sub_101A8570(this, (int)a2);
      break;
  }
}
