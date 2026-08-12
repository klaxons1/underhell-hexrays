void __thiscall sub_100CAC10(float *this)
{
  int v2; // ecx
  const char *v3; // [esp-4h] [ebp-Ch]
  float v4; // [esp+4h] [ebp-4h]

  (*(void (__stdcall **)(bool))(*(_DWORD *)this + 124))(*(_DWORD *)(dword_10430E6C + 48) != 0);
  v2 = sub_100422D0();
  if ( v2 )
  {
    if ( *(float *)(v2 + 5168) <= 0.0 )
      v4 = 0.0;
    else
      v4 = *(float *)(v2 + 5168);
    if ( *(float *)(v2 + 5168) < 35.0 )
    {
      if ( *(float *)(v2 + 5168) <= 0.0 )
        goto LABEL_10;
      v3 = "StaminaLow";
    }
    else
    {
      v3 = "StaminaNormal";
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80(v3);
LABEL_10:
    if ( this[79] != v4 )
      this[79] = v4;
  }
}
