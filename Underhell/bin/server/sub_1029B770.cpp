void __thiscall sub_1029B770(_DWORD *this, int a2)
{
  int v3; // eax
  float v4; // [esp+0h] [ebp-Ch]

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  *((_BYTE *)this + v3 + 1087) = 0;
  sub_102984B0((int)this);
  if ( sub_100E9200(this, (int)"ActBusyQueueMoveUpThinkContext") < *(float *)(dword_106B31C8 + 12) )
  {
    v4 = RandomFloat(0.30000001, 0.5) + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0(this, (int)sub_1029AEF0, v4, (int)"ActBusyQueueMoveUpThinkContext");
  }
}
