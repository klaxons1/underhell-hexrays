void __thiscall sub_101A0770(int this, int a2)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // eax

  sub_1003C500((unsigned __int16 *)this, a2);
  if ( a2 == 1 )
  {
    v3 = *(_DWORD **)(this + 1192);
    if ( v3 )
    {
      sub_100F1890(v3, 0, 0, 0);
      *(_DWORD *)(this + 1192) = 0;
    }
  }
  else if ( !a2 )
  {
    v4 = (_DWORD *)sub_100EA350(
                     (int *)(this + 436),
                     "vortigaunt_hand_glow",
                     1,
                     -1,
                     SLODWORD(flt_10459240),
                     qword_10459244,
                     SHIDWORD(qword_10459244));
    *(_DWORD *)(this + 1192) = v4;
    sub_100F1F50(v4, 0, (_DWORD *)(this - 8));
  }
}
