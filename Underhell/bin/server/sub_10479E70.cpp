void __cdecl sub_10479E70()
{
  void *v0; // eax

  v0 = dword_107018C0[0];
  if ( dword_107018C0[0] )
  {
    if ( (signed int)(dword_107018B8 - (unsigned int)dword_107018C0[0]) > 0 )
    {
      VirtualFree(dword_107018C0[0], dword_107018B8 - (unsigned int)dword_107018C0[0], 0x4000u);
      v0 = dword_107018C0[0];
      dword_107018B8 = (int)dword_107018C0[0];
      dword_107018B4 = (int)dword_107018C0[0];
    }
    if ( v0 )
    {
      VirtualFree(v0, 0, 0x8000u);
      dword_107018C0[0] = 0;
    }
  }
}
