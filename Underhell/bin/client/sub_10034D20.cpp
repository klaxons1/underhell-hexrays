int __thiscall sub_10034D20(int *this, int a2)
{
  int v3; // edx

  v3 = *this;
  if ( a2 <= 0 )
    return (*(int (__stdcall **)(const char *, int, _DWORD))(v3 + 444))(
             "PreEntityPacketReceived(no commands ack)",
             -1,
             0);
  (*(void (__stdcall **)(const char *, int, int))(v3 + 444))("PreEntityPacketReceived", a2 - 1, 1);
  return (*(int (__thiscall **)(int *, const char *, int, int))(*this + 444))(this, "PreEntityPacketReceived", -1, 2);
}
