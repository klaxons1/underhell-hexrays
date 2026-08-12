char __thiscall sub_101CDE00(int this)
{
  char result; // al

  result = *(_BYTE *)(this + 4420) == 0;
  *(_BYTE *)(this + 4420) = result;
  if ( result )
  {
    *(float *)(this + 4424) = 0.0;
    *(float *)(this + 4428) = 0.0;
    *(float *)(this + 4432) = 0.0;
    if ( *(_BYTE *)(this + 4436) )
    {
      *(_BYTE *)(this + 4436) = 0;
      sub_100EC390((_DWORD *)this, (int)"DraggedThink");
    }
    return sub_100EC3F0((_DWORD *)this, (int)sub_101CCD80, *(float *)(dword_106B31C8 + 12), (int)"DraggedThink");
  }
  return result;
}
