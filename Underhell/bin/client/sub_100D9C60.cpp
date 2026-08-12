int __thiscall sub_100D9C60(int this, int a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // rt1
  int result; // eax
  float v10; // [esp+Ch] [ebp-28h]
  float v11; // [esp+10h] [ebp-24h]
  int v12[3]; // [esp+20h] [ebp-14h] BYREF
  int v13; // [esp+2Ch] [ebp-8h] BYREF
  int v14; // [esp+30h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v12);
  sub_100D94A0((_BYTE *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 36))(dword_10439968);
  if ( !*(_BYTE *)(this + 184)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 204))(dword_1047CA6C) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 92))(this);
    v3 = *(float *)(this + 52);
    v4 = *(float *)(this + 56);
    *(float *)(this + 52) = 0.0;
    *(float *)(this + 56) = 0.0;
    v11 = v4;
    v10 = v3;
    sub_100D9A00((float *)this, v10, v11, (float *)&v13, (float *)&v14);
    sub_100D9A60((float *)&v13, (float *)&v14);
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1044CC48 + 80))(dword_1044CC48, &v13, &v14);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 8))(this) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 132))(this) )
      {
        sub_100D96A0((float *)this, (float *)(this + 4), a2, *(float *)&v13, *(float *)&v14);
      }
      else
      {
        sub_100D7980((float *)this, this + 4, a2, *(float *)&v13, *(float *)&v14);
        sub_100D96A0((float *)this, (float *)v12, a2, *(float *)&v13, *(float *)&v14);
        *(float *)(this + 4) = *(float *)v12;
        *(float *)(this + 8) = *(float *)&v12[1];
        *(float *)(this + 12) = *(float *)&v12[2];
      }
      v5 = flt_104024C8;
      if ( 0.0 != flt_104024C8 )
      {
        v6 = 0.0 * v5;
        v7 = 1.0 - v5;
        v8 = v6 + v7 * *(float *)(this + 32);
        *(float *)(this + 28) = v6 + *(float *)(this + 28) * v7;
        *(float *)(this + 32) = v8;
      }
    }
    else if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 132))(this) )
    {
      sub_100D96A0((float *)this, (float *)(this + 4), a2, *(float *)&v13, *(float *)&v14);
    }
    else
    {
      sub_100D96A0((float *)this, (float *)v12, a2, *(float *)&v13, *(float *)&v14);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 120))(this);
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 132))(this);
  if ( !result )
    return (*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v12);
  *(float *)(this + 28) = 0.0;
  *(float *)(this + 32) = 0.0;
  return result;
}
