void __thiscall sub_10328A10(float *this)
{
  int v2; // ecx
  double v3; // st7
  double v4; // st5
  double v5; // st7
  double v6; // st7
  double v7; // st7
  float v8; // [esp+Ch] [ebp-24h]
  float v9; // [esp+10h] [ebp-20h]
  float v10; // [esp+18h] [ebp-18h]
  float v11; // [esp+24h] [ebp-Ch] BYREF
  float v12; // [esp+28h] [ebp-8h]
  float v13; // [esp+2Ch] [ebp-4h]

  if ( *((_DWORD *)this + 106) )
  {
    if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this + 632))(0.75) )
    {
      v2 = *((_DWORD *)this + 106);
      if ( !v2 || ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 76))(v2) & 4) == 0 )
      {
        (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**((_DWORD **)this + 106) + 204))(
          *((_DWORD *)this + 106),
          &v11,
          0);
        v3 = (*(float *)(dword_106B31C8 + 12) - this[961]) * 1.3333334;
        v4 = 0.0;
        if ( v3 <= 1.0 )
        {
          if ( v3 >= 0.0 )
            v4 = v3;
          v5 = 0.0;
        }
        else
        {
          v5 = 0.0;
          v4 = 1.0;
        }
        v10 = v5;
        v9 = v5;
        v8 = v4;
        v6 = sub_102191B0(v8, v9, 1.0, v10, 1.0);
        v7 = v6 * v6;
        this[906] = v11 + (this[906] - v11) * v7;
        this[907] = v12 + (this[907] - v12) * v7;
        this[908] = v7 * (this[908] - v13) + v13;
      }
    }
  }
}
