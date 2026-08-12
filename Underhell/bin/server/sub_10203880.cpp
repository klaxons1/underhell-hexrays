void __thiscall sub_10203880(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // edx
  double v11; // st7
  __int64 v12; // [esp+1Ch] [ebp-20h]
  float v13; // [esp+1Ch] [ebp-20h]
  float v14; // [esp+1Ch] [ebp-20h]
  __int64 v15; // [esp+20h] [ebp-1Ch]
  float v16[3]; // [esp+2Ch] [ebp-10h] BYREF
  float v17; // [esp+38h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 808);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)v5 + 528))(v5, v16, 0, 0);
        HIDWORD(v15) = this;
        LODWORD(v15) = this;
        sub_1017CC60((float *)(this + 880), v16, v15);
        v6 = *(_DWORD *)(this + 812);
        if ( v6 != -1 )
        {
          v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 1];
          v8 = v6 >> 12;
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 2] == v8 )
          {
            if ( *v7 )
            {
              if ( off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 2] == v8 )
                v9 = *v7;
              else
                v9 = 0;
              if ( *(_DWORD *)(this + 808) == -1
                || off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] != *(_DWORD *)(this + 808) >> 12 )
              {
                v10 = 0;
              }
              else
              {
                v10 = off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1];
              }
              v11 = 0.0;
              if ( sub_102032C0(this, v10, v9, COERCE_INT(*(float *)(this + 820)), &v17) )
              {
                if ( !*(_BYTE *)(this + 828) )
                {
                  if ( 0.0 == *(float *)(this + 824) )
                    *(float *)(this + 824) = *(float *)(dword_106B31C8 + 12);
                  if ( *(float *)(this + 816) + *(float *)(this + 824) <= *(float *)(dword_106B31C8 + 12) )
                  {
                    HIDWORD(v12) = this;
                    LODWORD(v12) = this;
                    sub_1010DD80((_DWORD *)(this + 832), v12, 0.0);
                    v11 = 0.0;
                    *(_BYTE *)(this + 828) = 1;
                  }
                }
              }
              else
              {
                if ( *(_BYTE *)(this + 828) )
                  *(_BYTE *)(this + 828) = 0;
                *(float *)(this + 824) = 0.0;
              }
              v13 = v11;
              v14 = sub_10134630(v17, 1.0, *(float *)(this + 820), 1.0, v13);
              sub_10108AE0((int *)(this + 904), SLOBYTE(v14), this, this);
            }
          }
        }
        sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
}
