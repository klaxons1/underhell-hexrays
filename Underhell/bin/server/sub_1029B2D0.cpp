void __thiscall sub_1029B2D0(_DWORD *this)
{
  float v2; // [esp+0h] [ebp-Ch]

  if ( sub_100E9200(this, (int)"ActBusyQueueMoveUpThinkContext") < *(float *)(dword_106B31C8 + 12) )
  {
    v2 = RandomFloat(0.30000001, 0.5) + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0(this, (int)sub_1029AEF0, v2, (int)"ActBusyQueueMoveUpThinkContext");
  }
}
