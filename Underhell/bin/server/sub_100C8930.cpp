int __thiscall sub_100C8930(_DWORD *this)
{
  int result; // eax
  float *v3; // eax
  char v4; // bl
  int v5; // edi
  int v6; // eax
  double v7; // st7
  int v8; // eax
  const char *v9; // eax
  _BYTE v10[44]; // [esp+4h] [ebp-94h] BYREF
  float v11; // [esp+30h] [ebp-68h]
  float v12; // [esp+58h] [ebp-40h] BYREF
  float v13; // [esp+5Ch] [ebp-3Ch]
  float v14; // [esp+60h] [ebp-38h]
  float v15; // [esp+64h] [ebp-34h] BYREF
  float v16; // [esp+68h] [ebp-30h]
  float v17; // [esp+6Ch] [ebp-2Ch]
  float v18; // [esp+70h] [ebp-28h] BYREF
  float v19; // [esp+74h] [ebp-24h]
  float v20; // [esp+78h] [ebp-20h]
  float v21; // [esp+7Ch] [ebp-1Ch] BYREF
  float v22; // [esp+80h] [ebp-18h] BYREF
  float v23; // [esp+84h] [ebp-14h]
  float v24; // [esp+88h] [ebp-10h]
  float v25; // [esp+8Ch] [ebp-Ch] BYREF
  float v26; // [esp+90h] [ebp-8h]
  float v27; // [esp+94h] [ebp-4h]
  int savedregs; // [esp+98h] [ebp+0h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 320))(this) )
  {
LABEL_11:
    v3 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
    v25 = *v3;
    v4 = 0;
    v26 = v3[1];
    v5 = 21;
    v27 = v3[2];
    sub_10422220(this + 182, &v22);
    v6 = this[436];
    v7 = -(v23 * flt_106B4F44 + flt_106B4F40 * v22 + flt_106B4F48 * v24);
    v21 = v7;
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( !v8 )
      {
        v5 = 113;
        goto LABEL_20;
      }
      if ( v8 == 2 )
      {
        v5 = 115;
        goto LABEL_20;
      }
    }
    v4 = 1;
    if ( v7 <= 0.3 )
    {
      if ( v7 <= -0.3 )
        v5 = 22;
    }
    else
    {
      v5 = 23;
    }
LABEL_20:
    if ( sub_100BDCE0((int)this, v5) == -1 )
    {
      if ( v4 )
      {
        v5 = 21;
      }
      else if ( v21 <= 0.3 )
      {
        if ( v21 <= -0.3 )
          v5 = 22;
      }
      else
      {
        v5 = 23;
      }
    }
    if ( sub_100BDCE0((int)this, v5) == -1 )
    {
      v5 = 21;
      if ( sub_100BDCE0((int)this, 21) == -1 )
      {
        v9 = *(const char **)(*(int (__thiscall **)(_DWORD *, float *))(*this + 28))(this, &v21);
        if ( !v9 )
          v9 = String;
        Msg("ERROR! %s missing ACT_DIESIMPLE\n", v9);
        return 21;
      }
      return v5;
    }
    if ( v5 == 23 )
    {
      v18 = 16.0;
      v19 = 16.0;
      v20 = 18.0;
      v12 = -16.0;
      v13 = -16.0;
      v14 = -18.0;
      v15 = v22 * 64.0 + v25;
      v16 = v23 * 64.0 + v26;
      v17 = 64.0 * v24 + v27;
      sub_100231A0((int)&savedregs, (int)this, &v25, &v15, &v12, &v18, 33570827, (int)this, 0, (int)v10);
    }
    else
    {
      if ( v5 != 22 )
        return v5;
      v15 = 16.0;
      v16 = 16.0;
      v17 = 18.0;
      v12 = -16.0;
      v13 = -16.0;
      v14 = -18.0;
      v18 = v25 - v22 * 64.0;
      v19 = v26 - v23 * 64.0;
      v20 = v27 - 64.0 * v24;
      sub_100231A0((int)&savedregs, (int)this, &v25, &v18, &v12, &v15, 33570827, (int)this, 0, (int)v10);
    }
    if ( 1.0 != v11 )
      return 21;
    return v5;
  }
  switch ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 7) )
  {
    case 0:
      result = 21;
      break;
    case 1:
      result = 22;
      break;
    case 2:
      result = 23;
      break;
    case 3:
      result = 24;
      break;
    case 4:
      result = 113;
      break;
    case 5:
      result = 114;
      break;
    case 6:
      result = 115;
      break;
    case 7:
      result = 116;
      break;
    default:
      goto LABEL_11;
  }
  return result;
}
