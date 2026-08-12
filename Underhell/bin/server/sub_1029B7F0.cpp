void __thiscall sub_1029B7F0(_DWORD *this, unsigned int a2)
{
  float v3; // [esp+0h] [ebp-Ch]

  sub_102971A0((unsigned int)this, a2);
  if ( sub_100E9200(this, (int)"ActBusyQueueMoveUpThinkContext") < *(float *)(dword_106B31C8 + 12) )
  {
    v3 = RandomFloat(0.30000001, 0.5) + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0(this, (int)sub_1029AEF0, v3, (int)"ActBusyQueueMoveUpThinkContext");
  }
}
