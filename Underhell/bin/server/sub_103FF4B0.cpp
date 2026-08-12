void __thiscall sub_103FF4B0(_DWORD *this)
{
  int v2; // edi
  float v3; // [esp+0h] [ebp-10h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v2 = sub_100D1940(this);
  if ( !v2 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
    v2 = 0;
  v3 = (float)((unsigned __int8)(*(_BYTE *)(dword_106B3CDC + 12) - 1) != 0 ? 12 : 18);
  if ( !sub_103FC0D0((int)(this + 375), (int)&savedregs, v2, v3) )
    sub_103FEC80(*(float *)&this, 1, 0);
}
