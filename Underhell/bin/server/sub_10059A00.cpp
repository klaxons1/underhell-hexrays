int __thiscall sub_10059A00(int this)
{
  int v2; // eax
  int v4; // edi
  const char *v5; // eax
  const char *v6; // eax
  int v7; // eax
  float *v8; // edi
  float *v9; // eax
  void (__thiscall *v10)(int); // eax
  int v11; // eax
  int v12; // eax
  bool v13; // zf
  float *v14; // eax
  double v15; // st4
  double v16; // st7
  double v17; // st4
  double v18; // st5
  _DWORD v19[3]; // [esp+4h] [ebp-1Ch] BYREF
  float v20[3]; // [esp+10h] [ebp-10h] BYREF
  const char *v21; // [esp+1Ch] [ebp-4h] BYREF

  if ( *(float *)(this + 72) == flt_106F1CA8
    && *(float *)(this + 76) == flt_106F1CAC
    && *(float *)(this + 80) == flt_106F1CB0 )
  {
    return sub_1004B430((_DWORD **)this);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v2 = sub_1007DB30(100004);
  if ( sub_10023D10(*(_DWORD **)(this + 4), v2) )
    return 100005;
  if ( *(_DWORD *)(this + 116) )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v4 = sub_10261B20();
      if ( v4 )
      {
        v5 = *(const char **)(this + 116);
        if ( !v5 )
          v5 = String;
        if ( !sub_100CF660(v5, 0) )
        {
          if ( 0.0 == *(float *)(this + 132) || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 132) )
            return 100009;
          sub_10162BE0(&v21, "weapon_bugbait");
          v6 = v21;
          if ( !v21 )
            v6 = String;
          (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v4 + 1440))(v4, v6, 0);
        }
      }
    }
  }
  if ( !sub_10058540((float *)this) || sub_10058E20(this, 1) )
  {
    v10 = *(void (__thiscall **)(int))(*(_DWORD *)this + 52);
    if ( *(_BYTE *)(this + 122) )
    {
      v10(this);
      v12 = sub_1007DB30(100000);
      if ( !sub_10023D10(*(_DWORD **)(this + 4), v12) )
      {
        if ( sub_1004C220((_DWORD **)this, 100001) )
        {
          sub_10029660(*(_DWORD **)(this + 4), (int)"Follower lagging. Spoke CATCHUP.\n");
          sub_10058F40(this, "TLK_LEAD_CATCHUP");
          return 100001;
        }
        else
        {
          v14 = (float *)sub_1004BCA0((_DWORD **)this, v19);
          v15 = *v14 - *(float *)(this + 72);
          v16 = v15 * v15;
          v17 = v14[1] - *(float *)(this + 76);
          v18 = v14[2] - *(float *)(this + 80);
          if ( v18 * v18 + v17 * v17 + v16 >= 4096.0 )
          {
            if ( ((unsigned __int8)sub_1004B510((void *)this, 100003, 0)
               || (unsigned __int8)sub_1004B510((void *)this, 100008, 0))
              && (sub_10058F40(this, "TLK_LEAD_RETRIEVE"), *(_DWORD *)(this + 52))
              && sub_100590C0((_DWORD **)this) )
            {
              return 100012;
            }
            else
            {
              sub_10029660(*(_DWORD **)(this + 4), (int)"Leading Follower.\n");
              return 100000;
            }
          }
          else
          {
            return 100006;
          }
        }
      }
      if ( !*(_DWORD *)(this + 48) )
        return 100008;
      sub_10029660(*(_DWORD **)(this + 4), (int)"Follower lost. Spoke COMING_BACK.\n");
      sub_10058F40(this, "TLK_LEAD_COMINGBACK");
      v13 = *(_DWORD *)(this + 56) == 0;
      *(float *)(this + 156) = -1.0;
      if ( !v13 && sub_100590C0((_DWORD **)this) )
        return 100011;
    }
    else
    {
      v10(this);
      v11 = sub_1007DB30(100005);
      if ( sub_10023D10(*(_DWORD **)(this + 4), v11) && sub_1004C220((_DWORD **)this, 100003) )
        return 100010;
    }
    return 100003;
  }
  if ( 0.0 == *(float *)(this + 100) )
  {
    if ( sub_1004C220((_DWORD **)this, 32) )
    {
LABEL_21:
      *(float *)(this + 88) = flt_106F1CA8;
      *(float *)(this + 92) = flt_106F1CAC;
      *(float *)(this + 96) = flt_106F1CB0;
      sub_10058F40(this, "TLK_LEAD_WAITOVER");
      *(_BYTE *)(this + 122) = 1;
      return 67;
    }
  }
  else if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v7 = sub_10261B20();
    if ( v7 )
    {
      v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
      v9 = (float *)sub_1004BCA0((_DWORD **)this, v19);
      v20[0] = *v9 - *v8;
      v20[1] = v9[1] - v8[1];
      v20[2] = v9[2] - v8[2];
      if ( sub_100D7A40(v20) < *(float *)(this + 100) )
        goto LABEL_21;
    }
  }
  return 100007;
}
