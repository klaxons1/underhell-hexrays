unsigned int __thiscall sub_100B7C30(float *this)
{
  unsigned int result; // eax
  unsigned int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  char v9; // bl
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // [esp+4h] [ebp-3Ch]
  float v15[3]; // [esp+14h] [ebp-2Ch] BYREF
  int v16[3]; // [esp+20h] [ebp-20h] BYREF
  int v17[3]; // [esp+2Ch] [ebp-14h] BYREF
  int v18; // [esp+38h] [ebp-8h]
  float v19; // [esp+3Ch] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 2208))(this, v17);
  if ( (_BYTE)result )
  {
    v3 = *((_DWORD *)this + 911);
    if ( v3 == -1 || off_1061BE18[4 * ((_DWORD)this[911] & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * ((_DWORD)this[911] & 0xFFF) + 1];
    v5 = sub_100B6440(this, v4, (float *)v17, (float *)v16, v15, &v19);
    result = sub_101ACC70(v5, 1);
    if ( result )
    {
      this[936] = v19;
      this[938] = v15[0];
      this[939] = v15[1];
      this[940] = v15[2];
      this[941] = *(float *)v16;
      this[942] = *(float *)&v16[1];
      this[943] = *(float *)&v16[2];
      if ( v5 )
        this[914] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      else
        this[914] = NAN;
      v6 = sub_100B54B0((float *)v16, v5, this[937], (float *)v17);
      this[905] = *(float *)v17;
      v7 = v6;
      v18 = v6;
      this[906] = *(float *)&v17[1];
      this[907] = *(float *)&v17[2];
      result = *((_DWORD *)this + 912);
      if ( result == -1 || (result >>= 12, off_1061BE18[4 * ((_DWORD)this[912] & 0xFFF) + 2] != result) )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * ((_DWORD)this[912] & 0xFFF) + 1];
      if ( v7 != v8 )
      {
        v9 = *((_BYTE *)this + 3732);
        v19 = COERCE_FLOAT(sub_100B5090(this, v7));
        result = sub_103E0CF0(LODWORD(v19));
        if ( (_BYTE)result )
        {
          v14 = LODWORD(v19);
          v10 = sub_1026A890(this + 911);
          result = sub_100B5960(v10, v14);
          v9 = result;
        }
        if ( v9 != *((_BYTE *)this + 3732) )
        {
          *((_BYTE *)this + 3732) = v9;
          v11 = sub_1026A890(this + 911);
          if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
            sub_100DAE60(v11);
          this[927] = *(float *)(v11 + 580);
          this[928] = *(float *)(v11 + 584);
          this[929] = *(float *)(v11 + 588);
          v12 = sub_1026A890(this + 911);
          v13 = sub_100B5050(this, v12);
          result = (unsigned int)sub_10019680((_DWORD *)this + 911, v13);
        }
        if ( v18 )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 8))(v18);
          this[912] = *(float *)result;
        }
        else
        {
          this[912] = NAN;
        }
      }
    }
  }
  return result;
}
