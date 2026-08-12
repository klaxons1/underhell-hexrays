int __thiscall sub_103D7F60(float *this)
{
  const char *v2; // edi
  int v3; // edx
  int v4; // eax
  int *v5; // ecx
  int result; // eax
  float *v7; // edi
  int (__thiscall *v8)(float *); // eax
  float v9; // [esp+8h] [ebp-18h]
  int v10; // [esp+18h] [ebp-8h] BYREF
  float v11; // [esp+1Ch] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 28))(this, &v11);
  if ( !v2 || !*v2 )
  {
    v2 = "models/props_combine/CombineThumper002.mdl";
    this[115] = *(float *)sub_10162BE0(&v10, "models/props_combine/CombineThumper002.mdl");
    sub_100D8500(this);
  }
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_10112C00((int)(this + 80), 6);
  sub_100E0970((int)this, v3, 0, 0);
  sub_100EA370(this);
  j_nullsub_4(this);
  *((_BYTE *)this + 1120) = 1;
  sub_100EC3F0(this, (int)sub_103D79E0, 0.0, 0);
  v9 = *(float *)(dword_106B31C8 + 12) + 1.0;
  sub_100EC4A0((int *)this, v9, 0);
  v4 = sub_100BDE80((int)this, 1);
  if ( v4 != -1 )
  {
    sub_100C1170((int)this, v4);
    sub_100C2AB0((int)this);
    v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.0,
            1.0);
    if ( *((_DWORD *)this + 216) != LODWORD(v11) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v5 = (int *)*((_DWORD *)this + 6);
        if ( v5 )
          sub_100194B0(v5, 864);
      }
      this[216] = v11;
    }
  }
  *((_DWORD *)this + 281) = sub_100BEF30((int)this, "hammer");
  result = sub_101811E0("point_antlion_repellant", -1);
  v7 = (float *)result;
  if ( result )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)result + 96))(result);
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_100E0D20((int)v7, this + 145);
    v8 = *(int (__thiscall **)(float *))(*(_DWORD *)v7 + 8);
    v7[200] = (float)*((int *)this + 291);
    result = v8(v7);
    this[283] = *(float *)result;
  }
  if ( !*((_DWORD *)this + 284) )
    *((_DWORD *)this + 284) = 128;
  if ( !*((_DWORD *)this + 291) )
    *((_DWORD *)this + 291) = 1000;
  return result;
}
