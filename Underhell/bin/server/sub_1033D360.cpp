int __thiscall sub_1033D360(_BYTE *this)
{
  int v1; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  int v9; // eax
  const char *v10; // eax

  v1 = dword_106E653C;
  if ( dword_106E653C )
    goto LABEL_18;
  result = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1);
  if ( !result )
    return result;
  v1 = dword_106E653C;
  if ( dword_106E653C )
  {
LABEL_18:
    v9 = v1 - 1;
    if ( v9 )
    {
      result = v9 - 1;
      if ( result )
        return result;
      v10 = "COMBINEPRISONGUARD_ANSWER";
      if ( !this[4976] )
        v10 = "COMBINE_ANSWER";
    }
    else
    {
      v10 = "COMBINEPRISONGUARD_CLEAR";
      if ( !this[4976] )
        v10 = "COMBINE_CLEAR";
    }
    result = sub_100AC410((int)(this + 4244), v10, 0, 2);
    if ( result >= 0 )
      dword_106E653C = 0;
  }
  else
  {
    v4 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2);
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        result = v5 - 1;
        if ( !result )
        {
          v6 = "COMBINEPRISONGUARD_IDLE";
          if ( !this[4976] )
            v6 = "COMBINE_IDLE";
          return sub_100AC410((int)(this + 4244), v6, 0, 2);
        }
      }
      else
      {
        v7 = "COMBINEPRISONGUARD_QUEST";
        if ( !this[4976] )
          v7 = "COMBINE_QUEST";
        result = sub_100AC410((int)(this + 4244), v7, 0, 2);
        if ( result >= 0 )
          dword_106E653C = 2;
      }
    }
    else
    {
      v8 = "COMBINEPRISONGUARD_CHECK";
      if ( !this[4976] )
        v8 = "COMBINE_CHECK";
      result = sub_100AC410((int)(this + 4244), v8, 0, 2);
      if ( result >= 0 )
        dword_106E653C = 1;
    }
  }
  return result;
}
