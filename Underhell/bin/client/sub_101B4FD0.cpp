void __thiscall sub_101B4FD0(int this)
{
  int v2; // eax
  int v3; // esi
  double v4; // st7
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  void (*v8)(void); // eax
  const char *v9; // [esp-4h] [ebp-10h]
  float v10; // [esp+8h] [ebp-4h]

  v2 = sub_100422D0();
  v3 = v2;
  if ( v2 )
  {
    v4 = *(float *)(v2 + 5168);
    v10 = *(float *)(v2 + 5168);
    if ( *(float *)(this + 316) != v4 )
    {
      if ( v4 < 100.0 || *(float *)(this + 316) >= 100.0 )
      {
        if ( v4 < 100.0 && (*(float *)(this + 316) >= 100.0 || -1.0 == *(float *)(this + 316)) )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
          sub_10248C80("SuitAuxPowerNotMax");
        }
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
        sub_10248C80("SuitAuxPowerMax");
      }
      v5 = *(unsigned __int8 *)(v3 + 5284) + ((*(_DWORD *)(v3 + 5176) >> 1) & 1) + ((*(_DWORD *)(v3 + 5176) >> 2) & 1);
      if ( v5 == *(_DWORD *)(this + 324) )
        goto LABEL_20;
      *(_DWORD *)(this + 324) = v5;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 == 1;
          v8 = *(void (**)(void))(*(_DWORD *)dword_1044CC48 + 36);
          if ( v7 )
            v9 = "SuitAuxPowerTwoItemsActive";
          else
            v9 = "SuitAuxPowerThreeItemsActive";
          goto LABEL_19;
        }
        v9 = "SuitAuxPowerOneItemActive";
      }
      else
      {
        v9 = "SuitAuxPowerNoItemsActive";
      }
      v8 = *(void (**)(void))(*(_DWORD *)dword_1044CC48 + 36);
LABEL_19:
      v8();
      sub_10248C80(v9);
LABEL_20:
      *(float *)(this + 316) = v10;
    }
  }
}
