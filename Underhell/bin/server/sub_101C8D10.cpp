void __thiscall sub_101C8D10(int this)
{
  int v1; // eax
  int v3; // edi
  char v4; // al
  unsigned int v5; // eax
  float *v6; // eax
  int v7; // eax
  const char *v8; // esi
  float v9[3]; // [esp+4h] [ebp-10h] BYREF
  float v10; // [esp+10h] [ebp-4h]

  v1 = *(_DWORD *)(dword_106B31C8 + 24);
  if ( *(_DWORD *)(this + 244) != v1 )
  {
    *(_DWORD *)(this + 244) = v1;
    if ( *(_DWORD *)(this + 308) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] != *(_DWORD *)(this + 308) >> 12 )
    {
      v3 = 0;
    }
    else
    {
      v3 = off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1];
    }
    v4 = *(_BYTE *)(this + 306);
    if ( (v4 || v3) && v4 != 6 )
    {
      v5 = *(_DWORD *)(this + 452);
      if ( v5 == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 452) & 0xFFF) + 2] != v5 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(this + 452) & 0xFFF) + 1] )
      {
        sub_100EA9A0((int *)this, 1);
      }
      if ( v3 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 400))(v3);
      }
      else
      {
        sub_101C7180(this);
        if ( (*(_DWORD *)(this + 256) & 0x800000) == 0 && sub_1001F080((float *)(this + 464), &flt_106F1CA8) )
        {
          v10 = *(float *)(dword_106B31C8 + 16) * 0.5 + 1.0;
          v6 = (float *)sub_10019660((_DWORD *)this);
          v9[0] = *(float *)(this + 464) * v10 + *v6;
          v9[1] = *(float *)(this + 468) * v10 + v6[1];
          v9[2] = v10 * *(float *)(this + 472) + v6[2];
          sub_100DD660(this, v9);
          sub_100DCCB0((float *)this, &flt_106F1CA8);
        }
        sub_100EA9A0((int *)this, 0x800000);
      }
      v7 = *(unsigned __int8 *)(this + 306);
      switch ( *(_BYTE *)(this + 306) )
      {
        case 0:
          sub_101C8BE0((float *)this);
          break;
        case 3:
          sub_101C41F0(this, v3);
          break;
        case 4:
        case 5:
          sub_101C88B0(this);
          break;
        case 6:
          return;
        case 7:
          sub_101C3F00((float *)this);
          break;
        case 8:
          sub_101C2170((float *)this);
          break;
        case 0xB:
          sub_101C21F0(this);
          break;
        default:
          v8 = *(const char **)(this + 92);
          if ( !v8 )
            v8 = String;
          Warning("PhysicsSimulate: %s bad movetype %d", v8, v7);
          break;
      }
    }
    else
    {
      sub_101C1180((void *)this);
    }
  }
}
