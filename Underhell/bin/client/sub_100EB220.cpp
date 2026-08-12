int sub_100EB220()
{
  __int64 v0; // rax

  LODWORD(v0) = HIDWORD(qword_10435868) | qword_10435868;
  if ( qword_10435868 )
    return 1000 * qword_10435870 / qword_10435868;
  return v0;
}
