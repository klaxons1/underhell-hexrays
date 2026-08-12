void __thiscall sub_10308620(_DWORD *this, float *a2)
{
  float *v3; // eax
  double v4; // st6
  float v5; // [esp+10h] [ebp-24h] BYREF
  float v6; // [esp+14h] [ebp-20h]
  float v7; // [esp+18h] [ebp-1Ch]
  float v8[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v9; // [esp+28h] [ebp-Ch] BYREF
  float v10; // [esp+2Ch] [ebp-8h]
  float v11; // [esp+30h] [ebp-4h]

  if ( !*((_BYTE *)this + 3675) )
  {
    (*(void (__thiscall **)(_DWORD *, float *))(*this + 904))(this, &v5);
    v3 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
    v9 = *a2 - *v3;
    v10 = a2[1] - v3[1];
    v11 = 0.0;
    off_10689714();
    sub_10421D80(&v9, v8);
    v4 = v8[2] * v7 + v8[0] * v5 + v8[1] * v6;
    if ( v5 * v9 + v6 * v10 + v7 * v11 <= 0.0 )
    {
      if ( v4 >= 0.0 )
        this[906] = dword_106E300C;
      else
        this[906] = dword_106E3010;
    }
    else if ( v4 <= 0.0 )
    {
      this[906] = dword_106E3014;
    }
    else
    {
      this[906] = dword_106E3018;
    }
  }
}
