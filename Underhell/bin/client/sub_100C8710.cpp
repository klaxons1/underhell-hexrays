void __thiscall sub_100C8710(float *this)
{
  int v2; // eax
  int v3; // eax
  const char *v4; // [esp-4h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-4h]

  (*(void (__stdcall **)(bool))(*(_DWORD *)this + 124))(*(_DWORD *)(dword_10430E6C + 48) != 0);
  v2 = sub_100422D0();
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 3432);
    v5 = (float)(v3 <= 0 ? 0 : v3);
    if ( v3 < 50 )
    {
      if ( v3 < 20 )
      {
        if ( v3 <= 0 )
          goto LABEL_9;
        v4 = "EnduranceLow";
      }
      else
      {
        v4 = "EnduranceMedium";
      }
    }
    else
    {
      v4 = "EnduranceHigh";
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80(v4);
LABEL_9:
    if ( this[79] != v5 )
      this[79] = v5;
  }
}
