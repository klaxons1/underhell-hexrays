void __thiscall sub_1001C230(float *this, int a2)
{
  float *v2; // esi
  char *v3; // eax
  char *v4; // eax

  v2 = this;
  if ( !*((_DWORD *)this + 956) || a2 == 7 )
  {
    v4 = (char *)(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 2308))(this, a2);
    if ( v4 && *v4 )
    {
      v2[955] = sub_1001BA70(v2, v4) + *(float *)(dword_106B31C8 + 12);
    }
    else
    {
      v2[955] = 0.0;
      switch ( a2 )
      {
        case 1:
          if ( *((_DWORD *)v2 + 957) )
          {
            v3 = (char *)*((_DWORD *)v2 + 957);
            goto LABEL_17;
          }
          break;
        case 2:
          if ( *((_DWORD *)v2 + 958) )
          {
            v3 = (char *)*((_DWORD *)v2 + 958);
            goto LABEL_17;
          }
          break;
        case 3:
          if ( *((_DWORD *)v2 + 959) )
          {
            v3 = (char *)*((_DWORD *)v2 + 959);
            goto LABEL_17;
          }
          break;
        case 5:
        case 7:
          if ( *((_DWORD *)v2 + 960) )
          {
            v3 = (char *)*((_DWORD *)v2 + 960);
LABEL_17:
            if ( !v3 )
              v3 = (char *)String;
            this = v2;
            goto LABEL_20;
          }
          break;
        default:
          return;
      }
    }
  }
  else
  {
    v3 = (char *)*((_DWORD *)this + 956);
    if ( v3 )
LABEL_20:
      sub_1001BA70(this, v3);
    else
      sub_1001BA70(this, (char *)String);
  }
}
